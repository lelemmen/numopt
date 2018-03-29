# In this CMake file, we will find all required packages.


# Find Boost
find_package(Boost REQUIRED)

# Find Eigen
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

# Find Spectra through our own FindSpectra.cmake file
find_package(Spectra REQUIRED)

# Find cpputil
find_package(cpputil 1.2.1 REQUIRED)
