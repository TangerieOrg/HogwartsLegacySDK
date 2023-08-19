#pragma once
#include <cstdint>
class UObject;
#pragma pack(push, 1)
struct FNamedInterface {
    FName InterfaceName; // 0x0
    UObject* InterfaceObject; // 0x8
}; // Size: 0x10
#pragma pack(pop)
