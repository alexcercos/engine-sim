#include "../include/cylinder_bank.h"

#include "../include/constants.h"

#include <cmath>

CylinderBank::CylinderBank() {
    m_angle = 0.0;
    m_bore = 0.0;
    m_deckHeight = 0.0;
    m_cylinderCount = 0;
}

CylinderBank::~CylinderBank() {
    /* void */
}

void CylinderBank::initialize(const Parameters &params) {
    m_angle = params.Angle;
    m_bore = params.Bore;
    m_deckHeight = params.DeckHeight;
    m_cylinderCount = params.CylinderCount;

    m_dx = std::cos(m_angle + Constants::pi / 2);
    m_dy = std::sin(m_angle + Constants::pi / 2);
}

void CylinderBank::destroy() {
    /* void */
}