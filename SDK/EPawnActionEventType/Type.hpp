#pragma once
#include <cstdint>
namespace EPawnActionEventType {
#pragma pack(push, 1)
enum Type {
    Invalid = 0,
    FailedToStart = 1,
    InstantAbort = 2,
    FinishedAborting = 3,
    FinishedExecution = 4,
    Push = 5,
    EPawnActionEventType_MAX = 6,
};
#pragma pack(pop)
}
