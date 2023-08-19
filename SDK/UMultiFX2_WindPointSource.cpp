#include "EWindSourceCombine.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_WindPointSource.hpp"
#include "UWindEnvelopeController.hpp"
#include "UWindGustController.hpp"
UMultiFX2_WindPointSource* UMultiFX2_WindPointSource::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_WindPointSource");
    return (UMultiFX2_WindPointSource*)res;
}
