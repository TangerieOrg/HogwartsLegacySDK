#pragma once
#include <cstdint>
namespace ERemoteControlEnum {
#pragma pack(push, 1)
enum Type : uint8_t {
    E_One = 0,
    E_Two = 1,
    E_Three = 2,
    E_MAX = 3,
};
#pragma pack(pop)
}
