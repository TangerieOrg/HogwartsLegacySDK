#pragma once
#include <cstdint>
namespace EPinHidingMode {
#pragma pack(push, 1)
enum Type {
    NeverAsPin = 0,
    PinHiddenByDefault = 1,
    PinShownByDefault = 2,
    AlwaysAsPin = 3,
    EPinHidingMode_MAX = 4,
};
#pragma pack(pop)
}
