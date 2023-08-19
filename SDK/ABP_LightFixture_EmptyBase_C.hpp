#pragma once
#include <cstdint>
#include "ABP_LightFixture_Master_C.hpp"
#pragma pack(push, 1)
class ABP_LightFixture_EmptyBase_C : public ABP_LightFixture_Master_C {
public:
    static ABP_LightFixture_EmptyBase_C* StaticClass();
}; // Size: 0xaf0
#pragma pack(pop)
