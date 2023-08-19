#include "UAISense.hpp"
#include "UAISense_Smell.hpp"
UAISense_Smell* UAISense_Smell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_Smell");
    return (UAISense_Smell*)res;
}
