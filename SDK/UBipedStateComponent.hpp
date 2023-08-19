#pragma once
#include <cstdint>
#include "FBipedStateData.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UBaseStateComponent.hpp"
#pragma pack(push, 1)
class UBipedStateComponent : public UBaseStateComponent {
public:
    FBipedStateData BipedStateData; // 0x5a0
    FDbSingleColumnInfo TeamAsset; // 0x820
    char pad_8a8[0x8];
    static UBipedStateComponent* StaticClass();
    void SetTeamName(FName InTeamName);
    FName GetTeamName();
}; // Size: 0x8b0
#pragma pack(pop)
