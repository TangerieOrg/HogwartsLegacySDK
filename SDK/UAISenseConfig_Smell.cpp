#include "UAISenseConfig.hpp"
#include "UAISenseConfig_Smell.hpp"
#include "UClass.hpp"
UAISenseConfig_Smell* UAISenseConfig_Smell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISenseConfig_Smell");
    return (UAISenseConfig_Smell*)res;
}
