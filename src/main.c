#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#define VK_USE_PLATFORM_XLIB_KHR
#include <vulkan/vulkan.h>

void printlimits(VkPhysicalDeviceLimits limits)
{
    fprintf(stdout, "    maxImageDimension1D:%i\n", limits.maxImageDimension1D);
    fprintf(stdout, "    maxImageDimension2D:%i\n", limits.maxImageDimension2D);
    fprintf(stdout, "    maxImageDimension3D:%i\n", limits.maxImageDimension3D);
    fprintf(stdout, "    maxImageDimensionCube:%i\n", limits.maxImageDimensionCube);
    fprintf(stdout, "    maxImageArrayLayers:%i\n", limits.maxImageArrayLayers);
    fprintf(stdout, "    maxTexelBufferElements:%i\n", limits.maxTexelBufferElements);
    fprintf(stdout, "    maxUniformBufferRange:%i\n", limits.maxUniformBufferRange);
    fprintf(stdout, "    maxStorageBufferRange:%i\n", limits.maxStorageBufferRange);
    fprintf(stdout, "    maxPushConstantsSize:%i\n", limits.maxPushConstantsSize);
    fprintf(stdout, "    maxMemoryAllocationCount:%i\n", limits.maxMemoryAllocationCount);
    fprintf(stdout, "    maxSamplerAllocationCount:%i\n", limits.maxSamplerAllocationCount);
    fprintf(stdout, "    bufferImageGranularity:%i\n", limits.bufferImageGranularity);
    fprintf(stdout, "    sparseAddressSpaceSize:%i\n", limits.sparseAddressSpaceSize);
    fprintf(stdout, "    maxBoundDescriptorSets:%i\n", limits.maxBoundDescriptorSets);
    fprintf(stdout, "    maxPerStageDescriptorSamplers:%i\n", limits.maxPerStageDescriptorSamplers);
    fprintf(stdout, "    maxPerStageDescriptorUniformBuffers:%i\n", limits.maxPerStageDescriptorUniformBuffers);
    fprintf(stdout, "    maxPerStageDescriptorStorageBuffers:%i\n", limits.maxPerStageDescriptorStorageBuffers);
    fprintf(stdout, "    maxPerStageDescriptorSampledImages:%i\n", limits.maxPerStageDescriptorSampledImages);
    fprintf(stdout, "    maxPerStageDescriptorStorageImages:%i\n", limits.maxPerStageDescriptorStorageImages);
    fprintf(stdout, "    maxPerStageDescriptorInputAttachments:%i\n", limits.maxPerStageDescriptorInputAttachments);
    fprintf(stdout, "    maxPerStageResources:%i\n", limits.maxPerStageResources);
    fprintf(stdout, "    maxDescriptorSetSamplers:%i\n", limits.maxDescriptorSetSamplers);
    fprintf(stdout, "    maxDescriptorSetUniformBuffers:%i\n", limits.maxDescriptorSetUniformBuffers);
    fprintf(stdout, "    maxDescriptorSetUniformBuffersDynamic:%i\n", limits.maxDescriptorSetUniformBuffersDynamic);
    fprintf(stdout, "    maxDescriptorSetStorageBuffers:%i\n", limits.maxDescriptorSetStorageBuffers);
    fprintf(stdout, "    maxDescriptorSetStorageBuffersDynamic:%i\n", limits.maxDescriptorSetStorageBuffersDynamic);
    fprintf(stdout, "    maxDescriptorSetSampledImages:%i\n", limits.maxDescriptorSetSampledImages);
    fprintf(stdout, "    maxDescriptorSetStorageImages:%i\n", limits.maxDescriptorSetStorageImages);
    fprintf(stdout, "    maxDescriptorSetInputAttachments:%i\n", limits.maxDescriptorSetInputAttachments);
    fprintf(stdout, "    maxVertexInputAttributes:%i\n", limits.maxVertexInputAttributes);
    fprintf(stdout, "    maxVertexInputBindings:%i\n", limits.maxVertexInputBindings);
    fprintf(stdout, "    maxVertexInputAttributeOffset:%i\n", limits.maxVertexInputAttributeOffset);
    fprintf(stdout, "    maxVertexInputBindingStride:%i\n", limits.maxVertexInputBindingStride);
    fprintf(stdout, "    maxVertexOutputComponents:%i\n", limits.maxVertexOutputComponents);
    fprintf(stdout, "    maxTessellationGenerationLevel:%i\n", limits.maxTessellationGenerationLevel);
    fprintf(stdout, "    maxTessellationPatchSize:%i\n", limits.maxTessellationPatchSize);
    fprintf(stdout, "    maxTessellationControlPerVertexInputComponents:%i\n", limits.maxTessellationControlPerVertexInputComponents);
    fprintf(stdout, "    maxTessellationControlPerVertexOutputComponents:%i\n", limits.maxTessellationControlPerVertexOutputComponents);
    fprintf(stdout, "    maxTessellationControlPerPatchOutputComponents:%i\n", limits.maxTessellationControlPerPatchOutputComponents);
    fprintf(stdout, "    maxTessellationControlTotalOutputComponents:%i\n", limits.maxTessellationControlTotalOutputComponents);
    fprintf(stdout, "    maxTessellationEvaluationInputComponents:%i\n", limits.maxTessellationEvaluationInputComponents);
    fprintf(stdout, "    maxTessellationEvaluationOutputComponents:%i\n", limits.maxTessellationEvaluationOutputComponents);
    fprintf(stdout, "    maxGeometryShaderInvocations:%i\n", limits.maxGeometryShaderInvocations);
    fprintf(stdout, "    maxGeometryInputComponents:%i\n", limits.maxGeometryInputComponents);
    fprintf(stdout, "    maxGeometryOutputComponents:%i\n", limits.maxGeometryOutputComponents);
    fprintf(stdout, "    maxGeometryOutputVertices:%i\n", limits.maxGeometryOutputVertices);
    fprintf(stdout, "    maxGeometryTotalOutputComponents:%i\n", limits.maxGeometryTotalOutputComponents);
    fprintf(stdout, "    maxFragmentInputComponents:%i\n", limits.maxFragmentInputComponents);
    fprintf(stdout, "    maxFragmentOutputAttachments:%i\n", limits.maxFragmentOutputAttachments);
    fprintf(stdout, "    maxFragmentDualSrcAttachments:%i\n", limits.maxFragmentDualSrcAttachments);
    fprintf(stdout, "    maxFragmentCombinedOutputResources:%i\n", limits.maxFragmentCombinedOutputResources);
    fprintf(stdout, "    maxComputeSharedMemorySize:%i\n", limits.maxComputeSharedMemorySize);
    fprintf(stdout, "    maxComputeWorkGroupCount[3]:%i\n", limits.maxComputeWorkGroupCount[3]);
    fprintf(stdout, "    maxComputeWorkGroupInvocations:%i\n", limits.maxComputeWorkGroupInvocations);
    fprintf(stdout, "    maxComputeWorkGroupSize[3]:%i\n", limits.maxComputeWorkGroupSize[3]);
    fprintf(stdout, "    subPixelPrecisionBits:%i\n", limits.subPixelPrecisionBits);
    fprintf(stdout, "    subTexelPrecisionBits:%i\n", limits.subTexelPrecisionBits);
    fprintf(stdout, "    mipmapPrecisionBits:%i\n", limits.mipmapPrecisionBits);
    fprintf(stdout, "    maxDrawIndexedIndexValue:%i\n", limits.maxDrawIndexedIndexValue);
    fprintf(stdout, "    maxDrawIndirectCount:%i\n", limits.maxDrawIndirectCount);
    fprintf(stdout, "    maxSamplerLodBias:%i\n", limits.maxSamplerLodBias);
    fprintf(stdout, "    maxSamplerAnisotropy:%i\n", limits.maxSamplerAnisotropy);
    fprintf(stdout, "    maxViewports:%i\n", limits.maxViewports);
    fprintf(stdout, "    maxViewportDimensions[2]:%i\n", limits.maxViewportDimensions[2]);
    fprintf(stdout, "    viewportBoundsRange[2]:%i\n", limits.viewportBoundsRange[2]);
    fprintf(stdout, "    viewportSubPixelBits:%i\n", limits.viewportSubPixelBits);
    fprintf(stdout, "    minMemoryMapAlignment:%i\n", limits.minMemoryMapAlignment);
    fprintf(stdout, "    minTexelBufferOffsetAlignment:%i\n", limits.minTexelBufferOffsetAlignment);
    fprintf(stdout, "    minUniformBufferOffsetAlignment:%i\n", limits.minUniformBufferOffsetAlignment);
    fprintf(stdout, "    minStorageBufferOffsetAlignment:%i\n", limits.minStorageBufferOffsetAlignment);
    fprintf(stdout, "    minTexelOffset:%i\n", limits.minTexelOffset);
    fprintf(stdout, "    maxTexelOffset:%i\n", limits.maxTexelOffset);
    fprintf(stdout, "    minTexelGatherOffset:%i\n", limits.minTexelGatherOffset);
    fprintf(stdout, "    maxTexelGatherOffset:%i\n", limits.maxTexelGatherOffset);
    fprintf(stdout, "    minInterpolationOffset:%i\n", limits.minInterpolationOffset);
    fprintf(stdout, "    maxInterpolationOffset:%i\n", limits.maxInterpolationOffset);
    fprintf(stdout, "    subPixelInterpolationOffsetBits:%i\n", limits.subPixelInterpolationOffsetBits);
    fprintf(stdout, "    maxFramebufferWidth:%i\n", limits.maxFramebufferWidth);
    fprintf(stdout, "    maxFramebufferHeight:%i\n", limits.maxFramebufferHeight);
    fprintf(stdout, "    maxFramebufferLayers:%i\n", limits.maxFramebufferLayers);
    fprintf(stdout, "    framebufferColorSampleCounts:%i\n", limits.framebufferColorSampleCounts);
    fprintf(stdout, "    framebufferDepthSampleCounts:%i\n", limits.framebufferDepthSampleCounts);
    fprintf(stdout, "    framebufferStencilSampleCounts:%i\n", limits.framebufferStencilSampleCounts);
    fprintf(stdout, "    framebufferNoAttachmentsSampleCounts:%i\n", limits.framebufferNoAttachmentsSampleCounts);
    fprintf(stdout, "    maxColorAttachments:%i\n", limits.maxColorAttachments);
    fprintf(stdout, "    sampledImageColorSampleCounts:%i\n", limits.sampledImageColorSampleCounts);
    fprintf(stdout, "    sampledImageIntegerSampleCounts:%i\n", limits.sampledImageIntegerSampleCounts);
    fprintf(stdout, "    sampledImageDepthSampleCounts:%i\n", limits.sampledImageDepthSampleCounts);
    fprintf(stdout, "    sampledImageStencilSampleCounts:%i\n", limits.sampledImageStencilSampleCounts);
    fprintf(stdout, "    storageImageSampleCounts:%i\n", limits.storageImageSampleCounts);
    fprintf(stdout, "    maxSampleMaskWords:%i\n", limits.maxSampleMaskWords);
    fprintf(stdout, "    timestampComputeAndGraphics:%i\n", limits.timestampComputeAndGraphics);
    fprintf(stdout, "    timestampPeriod:%i\n", limits.timestampPeriod);
    fprintf(stdout, "    maxClipDistances:%i\n", limits.maxClipDistances);
    fprintf(stdout, "    maxCullDistances:%i\n", limits.maxCullDistances);
    fprintf(stdout, "    maxCombinedClipAndCullDistances:%i\n", limits.maxCombinedClipAndCullDistances);
    fprintf(stdout, "    discreteQueuePriorities:%i\n", limits.discreteQueuePriorities);
    fprintf(stdout, "    pointSizeRange[2]:%i\n", limits.pointSizeRange[2]);
    fprintf(stdout, "    lineWidthRange[2]:%i\n", limits.lineWidthRange[2]);
    fprintf(stdout, "    pointSizeGranularity:%i\n", limits.pointSizeGranularity);
    fprintf(stdout, "    lineWidthGranularity:%i\n", limits.lineWidthGranularity);
    fprintf(stdout, "    strictLines:%i\n", limits.strictLines);
    fprintf(stdout, "    standardSampleLocations:%i\n", limits.standardSampleLocations);
    fprintf(stdout, "    optimalBufferCopyOffsetAlignment:%i\n", limits.optimalBufferCopyOffsetAlignment);
    fprintf(stdout, "    optimalBufferCopyRowPitchAlignment:%i\n", limits.optimalBufferCopyRowPitchAlignment);
    fprintf(stdout, "    nonCoherentAtomSize:%i\n", limits.nonCoherentAtomSize);
}

int main(int argc, char* argv[])
{
    fprintf(stdout, "here we go!\n");
    VkApplicationInfo applicationinfo = {0};
    applicationinfo.pApplicationName = "Fredriks fancy vulkan shit";
    applicationinfo.applicationVersion = 1;
    applicationinfo.pEngineName = "Fredriks fancy engine";
    applicationinfo.apiVersion = VK_MAKE_VERSION(1, 0, 34);
    VkInstanceCreateInfo createInfo = {0};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.pApplicationInfo = &applicationinfo;
    const char* extnames[2] =
    {
        VK_KHR_SURFACE_EXTENSION_NAME,
        VK_KHR_XLIB_SURFACE_EXTENSION_NAME
    };
    createInfo.ppEnabledExtensionNames = extnames;
    createInfo.enabledExtensionCount = 2;

    VkInstance instance;

    VkResult result = vkCreateInstance(&createInfo, 0, &instance);

    if(result == VK_SUCCESS)
    {
        fprintf(stdout, "VULKAN!!! run!!!\n");
    }
    else
    {
        fprintf(stderr, "something went wrong creating the instance\n");
    }

    uint32_t devicecount = UINT32_MAX;
    VkPhysicalDevice* devices = 0;
    VkPhysicalDeviceProperties* deviceproperties = 0;
    result = vkEnumeratePhysicalDevices(instance, &devicecount, 0);

    if(result == VK_SUCCESS)
    {
        fprintf(stdout, "number of devices:%i\n", devicecount);

        if(devicecount != 0)
        {
            devices = malloc(devicecount * sizeof(VkPhysicalDevice));
            deviceproperties = malloc(devicecount * sizeof(VkPhysicalDeviceProperties));

            result = vkEnumeratePhysicalDevices(instance, &devicecount, devices);

            if(result == VK_SUCCESS)
            {

                for(int i = 0; i < devicecount; i++)
                {
                    vkGetPhysicalDeviceProperties(devices[i], &deviceproperties[i]);


                    fprintf(stdout, "Device Name:    %s\n", deviceproperties[i].deviceName);
                    fprintf(stdout, "Device Type:    %d\n", deviceproperties[i].deviceType);
                    fprintf(stdout, "Driver Version: %d\n", deviceproperties[i].driverVersion);
                    printlimits(deviceproperties[i].limits);

                }
            }
            else
            {
                fprintf(stderr, "uum what enumrate didn't work the second time %i\n", result);
            }
        }
    }
    else
    {
        fprintf(stderr, "something went wrong enumrating the devices\n");
        char* displayenv = getenv("DISPLAY");

        if(displayenv == 0)
        {

            fprintf(stderr, "DISPLAY not set\n");
        }
        else
        {
            fprintf(stderr, "DISPLAY=%s\n", displayenv);
        }
    }

    if(devices)
    {
        free(devices);
    }

    if(deviceproperties)
    {
        free(deviceproperties);
    }


    vkDestroyInstance(instance, 0);
    return 0;
}
