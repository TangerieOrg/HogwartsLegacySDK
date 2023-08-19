#pragma once
#include <cstdint>
#include "ABP_LightFixture_Master_C.hpp"
#pragma pack(push, 1)
class ABP_HM_LightPost_B_C : public ABP_LightFixture_Master_C {
public:
    static ABP_HM_LightPost_B_C* StaticClass();
    void UserConstructionScript();
}; // Size: 0xaf0
#pragma pack(pop)
