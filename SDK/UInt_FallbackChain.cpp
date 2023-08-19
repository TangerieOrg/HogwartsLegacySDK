#include "UIntProvider.hpp"
#include "UInt_FallbackChain.hpp"
UInt_FallbackChain* UInt_FallbackChain::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Int_FallbackChain");
    return (UInt_FallbackChain*)res;
}
