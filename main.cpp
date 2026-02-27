<!DOCTYPE html>
<html lang="ar" dir="rtl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>FakeCall Pro - Global Version</title>
    <style>
        body { background-color: #000; color: #0f0; font-family: monospace; text-align: center; display: flex; flex-direction: column; align-items: center; justify-content: center; height: 100vh; margin: 0; }
        .terminal { border: 2px solid #0f0; padding: 20px; border-radius: 10px; width: 90%; max-width: 400px; }
        input { background: transparent; border: 1px solid #0f0; color: #0f0; padding: 10px; margin: 10px 0; width: 80%; text-align: center; }
        button { background: #0f0; color: #000; border: none; padding: 10px 20px; cursor: pointer; font-weight: bold; }
        #phone-screen { display: none; border: 5px solid #333; border-radius: 30px; width: 250px; height: 450px; background: #111; position: relative; margin-top: 20px; animation: vibrate 0.2s infinite; }
        @keyframes vibrate { 0% { transform: translate(0); } 20% { transform: translate(-2px, 2px); } 40% { transform: translate(-2px, -2px); } 60% { transform: translate(2px, 2px); } 80% { transform: translate(2px, -2px); } 100% { transform: translate(0); } }
        .caller-id { margin-top: 100px; color: white; font-size: 1.5rem; }
        .actions { position: absolute; bottom: 50px; width: 100%; display: flex; justify-content: space-around; }
        .btn-call { width: 60px; height: 60px; border-radius: 50%; display: flex; align-items: center; justify-content: center; color: white; font-weight: bold; }
        .accept { background: #4cd137; } .decline { background: #e84118; }
    </style>
</head>
<body>

<div id="login" class="terminal">
    <h2>=== SECURE ACCESS ===</h2>
    <input type="text" id="user" placeholder="Operator ID">
    <input type="password" id="pass" placeholder="Access Code">
    <button onclick="login()">LOGIN</button>
</div>

<div id="setup" class="terminal" style="display:none;">
    <h3>Welcome, Agent</h3>
    <input type="text" id="target" placeholder="Target Name">
    <input type="number" id="delay" placeholder="Wait (seconds)">
    <button onclick="startCall()">ACTIVATE CALL</button>
</div>

<div id="phone-screen">
    <div class="caller-id">مكالمة واردة...<br><strong id="display-name"></strong></div>
    <div class="actions">
        <div class="btn-call decline" onclick="location.reload()">رفض</div>
        <div class="btn-call accept" onclick="alert('Connected!')">رد</div>
    </div>
</div>

<script>
    function login() {
        if(document.getElementById('user').value === 'admin' && document.getElementById('pass').value === '2026') {
            document.getElementById('login').style.display = 'none';
            document.getElementById('setup').style.display = 'block';
        } else { alert('Access Denied!'); }
    }

    function startCall() {
        let name = document.getElementById('target').value;
        let time = document.getElementById('delay').value * 1000;
        document.getElementById('display-name').innerText = name;
        document.getElementById('setup').style.display = 'none';
        
        setTimeout(() => {
            document.getElementById('phone-screen').style.display = 'block';
        }, time);
    }
</script>
</body>
</html>
