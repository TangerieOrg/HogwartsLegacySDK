#include "UNameProvider.hpp"
#include "UName_FallbackChain.hpp"
UName_FallbackChain* UName_FallbackChain::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Name_FallbackChain");
    return (UName_FallbackChain*)res;
}
