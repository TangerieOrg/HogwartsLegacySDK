#pragma once
#include <cstdint>
namespace EPawnActionAbortState {
#pragma pack(push, 1)
enum Type : uint8_t {
    NeverStarted = 0,
    NotBeingAborted = 1,
    MarkPendingAbort = 2,
    LatentAbortInProgress = 3,
    AbortDone = 4,
    MAX = 5,
};
#pragma pack(pop)
}
