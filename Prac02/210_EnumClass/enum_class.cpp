#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <vector>
#include <iomanip>

enum class StarRating {
    OneStars, TwoStars, ThreeStars, FourStars, FiveStars, Unrated
};
enum class Genre {
    Action, Comedy, Drama, Romance, SciFi
};
struct MovieDetails {
    Genre genre;
    std::vector<StarRating> ratings;
};
struct Movie {

    std::string title;
    Genre genre;
    StarRating rating;

};
int ratingToInt(StarRating rating) {
    switch ( rating ) {
        case StarRating::OneStars : return 1;
        case StarRating::TwoStars : return 2;
        case StarRating::ThreeStars : return 3;
        case StarRating::FourStars : return 4;
        case StarRating::FiveStars : return 5;
        default: { std::cerr << "Invalid Rating ";
            return 0; }
    }
}
StarRating stringToStarRating(const std::string& stars) {

    static const std::unordered_map<std::string, StarRating> ratingsMap = {

            {"★★★★★", StarRating::FiveStars},
            {"★★★★☆", StarRating::FourStars},
            {"★★★☆☆", StarRating::ThreeStars},
            {"★★☆☆☆", StarRating::TwoStars},
            {"★☆☆☆☆", StarRating::OneStars}

    };
    std::vector<Movie> movies;
    std::map<std::string, std::vector<int>> movieRatings;

    auto it = ratingsMap.find(stars);
    if (it != ratingsMap.end()) {
        return it -> second ;
    }
    else {
        return StarRating::Unrated;
    }
}
Genre stringToGenre(const std::string& genreStr) {
    static const std::unordered_map<std::string, Genre> genreMap = {
            {"Action", Genre::Action},
            {"Comedy", Genre::Comedy},
            {"Drama", Genre::Drama},
            {"Romance", Genre::Romance},
            {"SciFi", Genre::SciFi}
    };

    auto it = genreMap.find(genreStr);
    if (it != genreMap.end()) {
        return it->second;
    }
}
double calculateAverageRating(const std::vector<StarRating>& ratings) {
    if (ratings.empty()) return 0.0;
    int total = 0;
    for (const auto& rating : ratings) {
        int ratingInt = ratingToInt(rating);
        if (ratingInt == 0) {
            std::cerr << "Invalid Rating Detected\n";
        }
        total += ratingInt;
    }
    return static_cast<double>(total) / ratings.size();
}
std::string genreToString(Genre genre) {
    switch (genre) {
        case Genre::Action: return "Action";
        case Genre::Comedy: return "Comedy";
        case Genre::Drama: return "Drama";
        case Genre::Romance: return "Romance";
        case Genre::SciFi: return "SciFi";
        default: return "Unknown";
    }
}
int main() {
    std::vector<Movie> movies;
    std::map<std::string, MovieDetails> movieMap;
    Movie movie;
    std::string title;
    std::string inputGenre;
    std::string inputRating;
    while(true) {
        if (!std::getline(std::cin, title) || title == "q") {
            break;
        }

        //std::cout << "Enter movie genre: ";
        if (!std::getline(std::cin, inputGenre)) {
            continue;
        }

        //std::cout << "Enter movie rating: ";
        if (!std::getline(std::cin, inputRating)) {
            //std::cerr << "Error reading rating. Please try again." << std::endl;
            continue;
        }

        Genre genre = stringToGenre(inputGenre);
        StarRating rating = stringToStarRating(inputRating);
        //std::cout << "###" <<ratingToInt(rating) << std::endl;
        movieMap[title].genre = genre;
        movieMap[title].ratings.push_back(rating);
    }
    for (const auto& [title, details] : movieMap) {
        int numRatings = details.ratings.size();
        double avgRating = calculateAverageRating(details.ratings);
        std::cout << title
                  << ", " << numRatings << " ratings"
                  << ", average rating " << avgRating << " stars"
                  << ", genre: " << genreToString(details.genre) << std::endl;
    }
}