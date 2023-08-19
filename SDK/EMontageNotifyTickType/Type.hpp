#pragma once
#include <cstdint>
namespace EMontageNotifyTickType {
#pragma pack(push, 1)
enum Type : uint8_t {
    Queued = 0,
    BranchingPoint = 1,
    EMontageNotifyTickType_MAX = 2,
};
#pragma pack(pop)
}
