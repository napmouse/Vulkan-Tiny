#include "mesh.h"
VertexInputDescription Vertex::getVertexDescription() {
  VertexInputDescription description;

  // only one vertex buffer binding
  VkVertexInputBindingDescription mainBinding{};

  mainBinding.binding = 0;
  mainBinding.stride  = sizeof(Vertex);

  description.bindings.push_back(mainBinding);

  // Position will be stored at location 0
  VkVertexInputAttributeDescription positionAttribute{};
  positionAttribute.binding  = 0;
  positionAttribute.location = 0;
  positionAttribute.format   = VK_FORMAT_R32G32B32_SFLOAT;
  positionAttribute.offset   = offsetof(Vertex, position);

  // Normal will be stored at Location 1
  VkVertexInputAttributeDescription normalAttribute{};
  normalAttribute.binding  = 0;
  normalAttribute.location = 1;
  normalAttribute.format   = VK_FORMAT_R32G32B32_SFLOAT;
  normalAttribute.offset   = offsetof(Vertex, normal);

  // Color will be stored at Location 2
  VkVertexInputAttributeDescription colorAttribute{};
  colorAttribute.binding  = 0;
  colorAttribute.location = 2;
  colorAttribute.format   = VK_FORMAT_R32G32B32_SFLOAT;
  colorAttribute.offset   = offsetof(Vertex, color);

  description.attributes.push_back(positionAttribute);
  description.attributes.push_back(normalAttribute);
  description.attributes.push_back(colorAttribute);
  return description;
}