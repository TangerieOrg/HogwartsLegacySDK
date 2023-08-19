#include "UAnyButtonInputBehavior.hpp"
#include "UMultiClickSequenceInputBehavior.hpp"
UMultiClickSequenceInputBehavior* UMultiClickSequenceInputBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.MultiClickSequenceInputBehavior");
    return (UMultiClickSequenceInputBehavior*)res;
}
