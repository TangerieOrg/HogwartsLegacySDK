#pragma once
#include <cstdint>
#include "FMissionLogData.hpp"
#include "UInterface.hpp"
class UUserWidget;
#pragma pack(push, 1)
class UUI_BPI_MissionButton_C : public UInterface {
public:
    static UUI_BPI_MissionButton_C* StaticClass();
    void I_GetMissionData(FMissionLogData& MissionData);
    void I_SetMissionData(FMissionLogData MissionData);
    void I_SetOwner(UUserWidget* Owner);
    void I_SetMissionFocus(bool IsFocus);
}; // Size: 0x28
#pragma pack(pop)
