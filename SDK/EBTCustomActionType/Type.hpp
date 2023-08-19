#pragma once
#include <cstdint>
namespace EBTCustomActionType {
#pragma pack(push, 1)
enum Type : uint8_t {
    Started = 0,
    Completed = 1,
    Canceled = 2,
    EBTCustomActionType_MAX = 3,
};
#pragma pack(pop)
}
