#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UUI_BPI_ConjurationHUD_C : public UInterface {
public:
    static UUI_BPI_ConjurationHUD_C* StaticClass();
    void SetCategory(FString Category);
}; // Size: 0x28
#pragma pack(pop)
