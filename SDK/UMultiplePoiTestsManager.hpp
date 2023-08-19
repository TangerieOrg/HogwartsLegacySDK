#pragma once
#include <cstdint>
#include "FMultiplePoiTest.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMultiplePoiTestsManager : public UObject {
public:
    TArray<FMultiplePoiTest> AllTests; // 0x28
    static UMultiplePoiTestsManager* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
