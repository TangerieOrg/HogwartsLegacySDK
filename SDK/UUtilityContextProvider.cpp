#include "UInterface.hpp"
#include "UUtilityContextProvider.hpp"
UUtilityContextProvider* UUtilityContextProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.UtilityContextProvider");
    return (UUtilityContextProvider*)res;
}
