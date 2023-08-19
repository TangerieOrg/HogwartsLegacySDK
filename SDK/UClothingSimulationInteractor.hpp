#pragma once
#include <cstdint>
#include "UObject.hpp"
class UClothingInteractor;
struct FVector;
#pragma pack(push, 1)
class UClothingSimulationInteractor : public UObject {
public:
    char pad_28[0x68];
    static UClothingSimulationInteractor* StaticClass();
    void SetNumSubsteps(int32_t NumSubsteps);
    void SetNumIterations(int32_t NumIterations);
    void SetMaxNumIterations(int32_t MaxNumIterations);
    void SetAnimDriveSpringStiffness(float InStiffness);
    void PhysicsAssetUpdated();
    float GetSimulationTime();
    int32_t GetNumSubsteps();
    int32_t GetNumKinematicParticles();
    int32_t GetNumIterations();
    int32_t GetNumDynamicParticles();
    int32_t GetNumCloths();
    UClothingInteractor* GetClothingInteractor(FString ClothingAssetName);
    void EnableGravityOverride(FVector& InVector);
    void DisableGravityOverride();
    void ClothConfigUpdated();
}; // Size: 0x90
#pragma pack(pop)
