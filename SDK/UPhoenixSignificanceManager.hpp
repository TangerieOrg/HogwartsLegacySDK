#pragma once
#include <cstdint>
#include "ESignificanceBiasEnum.hpp"
#include "UObject.hpp"
class UBudgeter;
class AActor;
#pragma pack(push, 1)
class UPhoenixSignificanceManager : public UObject {
public:
    char pad_28[0xc8];
    TArray<UBudgeter*> Budgeters; // 0xf0
    char pad_100[0x208];
    static UPhoenixSignificanceManager* StaticClass();
    bool SetObjectSignficanceBias(UObject* Object, ESignificanceBiasEnum SignificanceBias);
    void OnRegisteredActorDestroyed(AActor* DestroyedActor);
    static UPhoenixSignificanceManager* GetSignificanceManager(UObject* WorldContextObject);
    float GetSignificance(UObject* Object);
}; // Size: 0x308
#pragma pack(pop)
