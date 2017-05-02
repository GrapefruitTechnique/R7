/*
* Copyright (C) 2017 by Godlike
* This code is licensed under the MIT license (MIT)
* (http://opensource.org/licenses/MIT)
*/

#ifndef UNICORN_VIDEO_VULKAN_UNIFORM_OBJECT_HPP
#define UNICORN_VIDEO_VULKAN_UNIFORM_OBJECT_HPP

#define GLM_FORCE_RADIANS
#include <glm/glm.hpp>
#include <vulkan/vulkan.hpp>
#include <unicorn/video/vulkan/Buffer.hpp>

namespace unicorn
{
namespace video
{
namespace vulkan
{
struct UniformBufferObject
{
    glm::mat4 model;
    glm::mat4 view;
    glm::mat4 proj;
};

class UniformObject
{
public:
    UniformObject(vk::Device device, vk::PhysicalDevice physicalDevice, vk::CommandPool pool, vk::Queue queue);
    ~UniformObject();

    bool CreateLayout();
    bool CreateSet(vk::DescriptorPool descrPool);
    void Destroy() const;
    void Update(float deltaTime, const UniformBufferObject& ubo);
    const vk::DescriptorSetLayout* GetDescriptorLayout() const;
    vk::DescriptorSet GetDescriptorSet() const;
    void SetCommandPool(vk::CommandPool newpool)
    {
        m_pool = newpool;
    }

private:
    vk::Device m_device;
    vk::PhysicalDevice m_physicalDevice;
    vk::CommandPool m_pool;
    vk::Queue m_queue;
    vk::DescriptorSetLayout m_descriptorSetLayout;
    Buffer m_uniformStagingBuffer;
    Buffer m_uniformBuffer;
    vk::DescriptorSet m_descriptorSet;
};
}
}
}

#endif // UNICORN_VIDEO_VULKAN_UNIFORM_OBJECT_HPP