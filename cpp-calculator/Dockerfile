# Use official gcc baseImage 
FROM gcc:latest

# Set up working directory
WORKDIR /app

# Copy source code to the container
COPY calculator.cpp .

# Compile C++ Program
RUN g++ -o calculator calculator.cpp

# Command

CMD [ "./calculator" ]
