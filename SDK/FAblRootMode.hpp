#pragma once
#include <cstdint>
#include "EEvaluatorRootMotion\Mode.hpp"
#pragma pack(push, 1)
struct FAblRootMode {
    EEvaluatorRootMotion::Mode m_UseSourceRootMotion; // 0x0
    EEvaluatorRootMotion::Mode m_UseDestRootMotion; // 0x1
}; // Size: 0x2
#pragma pack(pop)
