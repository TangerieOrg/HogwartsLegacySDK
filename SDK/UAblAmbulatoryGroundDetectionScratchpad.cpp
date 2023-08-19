#include "UAblAmbulatoryGroundDetectionScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
#include "UAmbulatory_MovementComponent.hpp"
UAblAmbulatoryGroundDetectionScratchpad* UAblAmbulatoryGroundDetectionScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAmbulatoryGroundDetectionScratchpad");
    return (UAblAmbulatoryGroundDetectionScratchpad*)res;
}
