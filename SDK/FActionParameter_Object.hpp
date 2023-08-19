#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_Object.hpp"
class UObjectProvider;
#pragma pack(push, 1)
struct FActionParameter_Object {
    FSceneRigParameterBinding_Object BoundParameter; // 0x0
    UObjectProvider* DefaultObject; // 0x8
}; // Size: 0x10
#pragma pack(pop)
