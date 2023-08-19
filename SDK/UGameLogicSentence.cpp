#include "UGameLogicBoolBase.hpp"
#include "UGameLogicSentence.hpp"
UGameLogicSentence* UGameLogicSentence::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicSentence");
    return (UGameLogicSentence*)res;
}
