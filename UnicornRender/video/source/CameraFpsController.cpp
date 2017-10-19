/*
* Copyright (C) 2017 by Godlike
* This code is licensed under the MIT license (MIT)
* (http://opensource.org/licenses/MIT)
*/

#include <unicorn/video/CameraFpsController.hpp>

#include <unicorn/utility/Logger.hpp>

#include <algorithm>

namespace unicorn
{
namespace video
{

CameraFpsController::CameraFpsController(glm::mat4& cameraView)
    : CameraController(cameraView)
    , m_mousePosition(0)
    , m_dirtyViewPosition(true)
{
}

void CameraFpsController::UpdateView(float x, float y)
{
    const float xoffset = x - m_mousePosition.x;
    const float yoffset = y - m_mousePosition.y;

    m_mousePosition.x = x;
    m_mousePosition.y = y;

    if (m_dirtyViewPosition)
    {
        m_dirtyViewPosition = false;
        return;
    }

    m_rotation.x += glm::radians(xoffset);
    m_rotation.y += glm::radians(yoffset);

    m_isDirty = true;
}

void CameraFpsController::SetViewPositions(double x, double y)
{
    m_mousePosition = glm::vec2(x, y);
}

void CameraFpsController::ResetView()
{
    m_dirtyViewPosition = false;
}

} // namespace video
} // namespace unicorn
