#pragma once
#include <cstdint>
namespace EBTBlackboardRestart {
#pragma pack(push, 1)
enum Type : uint8_t {
    ValueChange = 0,
    ResultChange = 1,
    EBTBlackboardRestart_MAX = 2,
};
#pragma pack(pop)
}
