<script src="https://cdn.pubnub.com/sdk/javascript/pubnub.4.29.9.min.js"></script>

<script>
    // إعداد الاتصال بين جهازين
    const pubnub = new PubNub({
        publishKey: 'demo', // مفتاح تجريبي للربط
        subscribeKey: 'demo',
        uuid: "agent_" + Math.random()
    });

    pubnub.subscribe({ channels: ['fake_call_channel'] });

    // استقبال الإشارة من الجهاز الآخر
    pubnub.addListener({
        message: function(m) {
            if(m.message.type === 'TRIGGER_CALL') {
                document.getElementById('display-name').innerText = m.message.targetName;
                document.getElementById('iphone-frame').style.display = 'block';
                new Audio('https://www.soundjay.com/phone/phone-calling-1.mp3').play();
            }
        }
    });

    // إرسال الإشارة لجهاز الصديق
    function initiateCall() {
        const name = document.getElementById('target').value;
        pubnub.publish({
            channel: 'fake_call_channel',
            message: { type: 'TRIGGER_CALL', targetName: name }
        });
        alert("تم إرسال إشارة الاتصال للجهاز الآخر!");
    }
</script>
