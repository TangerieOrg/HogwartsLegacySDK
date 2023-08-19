#include "UDeveloperSettings.hpp"
#include "UMastermindSettings.hpp"
UMastermindSettings* UMastermindSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Mastermind.MastermindSettings");
    return (UMastermindSettings*)res;
}
