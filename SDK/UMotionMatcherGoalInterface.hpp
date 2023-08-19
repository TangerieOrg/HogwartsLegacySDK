#pragma once
#include <cstdint>
#include "UInterface.hpp"
class ACharacter;
struct FFeatureVector;
#pragma pack(push, 1)
class UMotionMatcherGoalInterface : public UInterface {
public:
    static UMotionMatcherGoalInterface* StaticClass();
    bool UpdateGoal(ACharacter* Character, FFeatureVector& Goal);
    bool InitializeGoal(FFeatureVector& Goal);
}; // Size: 0x28
#pragma pack(pop)
