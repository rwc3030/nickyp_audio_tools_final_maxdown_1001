# Architect Notes

## Remaining Features and Tasks
- Review 'checklist.md' for the next task. **Status: In Progress**

## Code Duplication and Cleanup Actions
1. **Redundant Functionality**: The `setDefaultValues` function is implemented in multiple control classes (e.g., `CompressionControl`, `EQControl`, `ReverbControl`, `LimiterControl`). This could be refactored into a base class to reduce code duplication.
2. **Similar Painting Logic**: The `paint` function in several control classes (e.g., `CompressionControl`, `EQControl`, `ReverbControl`, `LimiterControl`) contains similar logic for rendering. This could be abstracted into a common method to streamline the painting process.
3. **Extreme Value Handling**: The `handleExtremeValues` function is also repeated across multiple classes with similar logic. This could be centralized to improve maintainability.

## Bugs and Functional Issues
- [ ] Bug: Issue with EQ control not responding to frequency adjustments.
- [ ] Bug: Compression engine occasionally fails to apply settings after rapid adjustments.
- [ ] Bug: Reverb module does not retain settings after plugin reload.
- [ ] Bug: Limiter control shows incorrect maximum volume indicator under certain conditions.

## Gaps to Feature Completeness
- **EQ Control**: The EQ control needs a visual representation of frequency adjustments to provide user feedback. Additionally, a reset button for frequency bands would enhance usability.
- **Compression Engine**: The compression engine requires a visual meter to indicate gain reduction, which is essential for users to understand the effect of their settings.
- **Reverb Module**: The reverb module should include a preset management system to allow users to save and recall their favorite settings easily.
- **Limiter Control**: The limiter control needs an audible feedback mechanism to alert users when the maximum volume threshold is approached, ensuring they can make adjustments before distortion occurs.

## File and Directory Structure Adjustments
- Adjusted the project directory structure to align with the requirements specified in 'README.md'. The following directories were created:
  - Source/Core
  - Source/GUI
  - Source/Presets
  - Resources/Images/CompanyAssets
  - Resources/Presets
  - Tests/DSP
  - Tests/GUI
  - Tests/Integration
  - Docs/API
  - Docs/DSP
  - Docs/GUI
  - Docs/Testing

