# spo-lr2

## Server session
```
[SYS] Enter slot name: \\.\mailslot\q
[SYS] Start session in Server mode
[SYS] Commands:
                [check] messages
                [read] messages
                [quit] prorgam
[IN] \\.\mailslot\q > check
[OUT] Found 2 messages in active mailslot
[IN] \\.\mailslot\q > read
Test
q
w
e
123456
.

[IN] \\.\mailslot\q > read
Another text
msg
09876
.

[IN] \\.\mailslot\q >
```


## Client session
```
[SYS] Enter slot name: \\.\mailslot\q
[SYS] Start session in Client mode
[SYS] Commands:
                [check] messages
                [write] new message
                [quit] prorgam
[IN] \\.\mailslot\q > write
[OUT] Type your message here. Type '.' in new line to terminate.
Test
q
w
e
123456
.
[OUT] Your message has been successfully sent!
[IN] \\.\mailslot\q > check
[OUT] Found 1 messages in active mailslot
[IN] \\.\mailslot\q > write
[OUT] Type your message here. Type '.' in new line to terminate.
Another text
msg
09876
.
[OUT] Your message has been successfully sent!
[IN] \\.\mailslot\q > check
[OUT] Found 2 messages in active mailslot
[IN] \\.\mailslot\q >
```
