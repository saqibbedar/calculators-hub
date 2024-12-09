# Use the official Nginx image from the Docker Hub
FROM nginx:latest

# Copy HTML, CSS and JS files to the Nginx HTML directory
COPY . /usr/share/nginx/html

# Expose port 80 to the outside world
EXPOSE 80

# Start Nginx when the container launches 
CMD [ "nginx", "-g", "daemon off;" ]