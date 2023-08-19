#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UInterface.hpp"
class UWidget;
#pragma pack(push, 1)
class UUI_BPI_IconButton_C : public UInterface {
public:
    static UUI_BPI_IconButton_C* StaticClass();
    void I_SetIconSize(FVector2D Size);
    void I_AddExtraContent(UWidget* NewContent);
    void I_SetImage(FString ImageName);
    void I_GetIconName(FString& IconName);
    void I_SetIconName(FString IconName);
}; // Size: 0x28
#pragma pack(pop)
