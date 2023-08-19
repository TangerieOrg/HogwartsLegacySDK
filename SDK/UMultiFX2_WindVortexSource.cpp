#include "EWindSourceCombine.hpp"
#include "UMultiFX2_Filtered.hpp"
#include "UMultiFX2_WindVortexSource.hpp"
#include "UWindEnvelopeController.hpp"
#include "UWindGustController.hpp"
UMultiFX2_WindVortexSource* UMultiFX2_WindVortexSource::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_WindVortexSource");
    return (UMultiFX2_WindVortexSource*)res;
}
