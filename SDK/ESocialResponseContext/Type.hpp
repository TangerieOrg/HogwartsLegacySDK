#pragma once
#include <cstdint>
namespace ESocialResponseContext {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    InTransit = 1,
    InStation = 2,
    ESocialResponseContext_MAX = 3,
};
#pragma pack(pop)
}
