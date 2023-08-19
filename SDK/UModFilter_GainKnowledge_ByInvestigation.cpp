#include "UModFilter_GainKnowledge_Base.hpp"
#include "UModFilter_GainKnowledge_ByInvestigation.hpp"
UModFilter_GainKnowledge_ByInvestigation* UModFilter_GainKnowledge_ByInvestigation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_GainKnowledge_ByInvestigation");
    return (UModFilter_GainKnowledge_ByInvestigation*)res;
}
