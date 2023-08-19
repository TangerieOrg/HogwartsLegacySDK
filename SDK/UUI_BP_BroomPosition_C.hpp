#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "UUserWidget.hpp"
class UPhoenixTextBlock;
class UImage;
#pragma pack(push, 1)
class UUI_BP_BroomPosition_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UPhoenixTextBlock* placeName; // 0x270
    UPhoenixTextBlock* placeNumber; // 0x278
    UPhoenixTextBlock* placeTime; // 0x280
    UImage* playerColorMarker; // 0x288
    int32_t positionNumber; // 0x290
    char pad_294[0x4];
    FString Player_Name; // 0x298
    static UUI_BP_BroomPosition_C* StaticClass();
    void SetPositionData(FString RacerName);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_UI_BP_BroomPosition(int32_t EntryPoint);
}; // Size: 0x2a8
#pragma pack(pop)
