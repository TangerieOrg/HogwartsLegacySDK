#include "ATestTier4_C.hpp"
#include "ATier4_Actor.hpp"
ATestTier4_C* ATestTier4_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/CustomContent/CPP/TestTier4.TestTier4_C");
    return (ATestTier4_C*)res;
}
