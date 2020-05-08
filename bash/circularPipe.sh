echo "" > /tmp/buffer; tail -f /tmp/buffer | netcat httpbin.org 80 | netcat -lp 8080 > /tmp/buffer
