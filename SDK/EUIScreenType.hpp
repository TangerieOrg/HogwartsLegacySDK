#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUIScreenType : uint8_t {
    UIST_Screen = 0,
    UIST_NonModalTutorial = 1,
    UIST_ModalTutorial = 2,
    UIST_Popup = 3,
    UIST_MAX = 4,
};
#pragma pack(pop)
