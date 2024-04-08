#include <iostream>
#include <map>
#include <string>
#include <vector>

int main() {

    
    enum class StarRating {
        OneStar, TwoStars, ThreeStars, FourStars, FiveStars, Unrated 
    };
    enum class Genre {
        Action, Comedy, Drama, Romance, SciFi
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

      {"�ڡڡڡڡ�", StarRating::FiveStars},

      {"�ڡڡڡڡ�", StarRating::FourStars},

      {"�ڡڡڡ١�", StarRating::ThreeStars},

      {"�ڡڡ١١�", StarRating::TwoStars},

      {"�ڡ١١١�", StarRating::OneStar}

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

}