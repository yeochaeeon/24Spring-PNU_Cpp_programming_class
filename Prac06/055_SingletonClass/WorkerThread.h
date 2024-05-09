//
// Created by codjs on 2024-05-07.
//

#ifndef WORKERTHREAD_H
#define WORKERTHREAD_H
#include <vector>
#include "SharedPreferences.h"
class WorkerThread {
public:
    void play();
private:
    void readWorker();
    void writeWorker(int value);
    std::mutex mu;
    std::vector<SharedPreferences*> answers;
};
#endif //C_PROGRAMMING_WORKERTHREAD_H
