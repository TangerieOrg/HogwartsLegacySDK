#pragma once
#include <cstdint>
#include "ABP_Knowledge_Investigatable_Object_C.hpp"
#pragma pack(push, 1)
class ABP_Overland_Knowledge_Investigatable_C : public ABP_Knowledge_Investigatable_Object_C {
public:
    FString OL_Investigatable_Name; // 0x378
    static ABP_Overland_Knowledge_Investigatable_C* StaticClass();
    void UserConstructionScript0();
}; // Size: 0x388
#pragma pack(pop)
