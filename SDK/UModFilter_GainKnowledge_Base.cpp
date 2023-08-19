#include "UModFilter.hpp"
#include "UModFilter_GainKnowledge_Base.hpp"
UModFilter_GainKnowledge_Base* UModFilter_GainKnowledge_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_GainKnowledge_Base");
    return (UModFilter_GainKnowledge_Base*)res;
}
