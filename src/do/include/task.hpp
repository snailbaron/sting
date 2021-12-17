#pragma once

namespace snailbaron::do {

enum class Status {
    Running,
    Success,
    Failure,
};

class Task {
public:
    virtual ~Task() {}
    virtual Status operator()() = 0;
};

}
