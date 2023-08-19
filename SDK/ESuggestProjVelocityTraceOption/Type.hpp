#pragma once
#include <cstdint>
namespace ESuggestProjVelocityTraceOption {
#pragma pack(push, 1)
enum Type : uint8_t {
    DoNotTrace = 0,
    TraceFullPath = 1,
    OnlyTraceWhileAscending = 2,
    ESuggestProjVelocityTraceOption_MAX = 3,
};
#pragma pack(pop)
}
